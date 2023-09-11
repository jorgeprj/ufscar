package br.ufscar.dc.dsw.controller;

import java.util.ArrayList;
import java.util.List;

import org.springframework.stereotype.Controller;
import org.springframework.ui.Model;
import org.springframework.web.bind.annotation.GetMapping;
import org.springframework.web.bind.annotation.RequestMapping;
import org.springframework.web.bind.annotation.RequestMethod;
import org.springframework.web.bind.annotation.RequestParam;

import br.ufscar.dc.dsw.domain.Temperaturas;

@Controller
public class TemperaturasController {
	
    @GetMapping("/")
    public String index() {
        return "index";
    }
    
    @RequestMapping(path = "/lista", method = {RequestMethod.GET, RequestMethod.POST})
    public String conversao(@RequestParam(required = false, defaultValue = "-100") int minimo, 
    		@RequestParam(required = false, defaultValue = "100") int maximo, 
            @RequestParam(required = false, defaultValue = "5") int incremento,  
    		Model model) {
        
    	List<Temperaturas> lista = listaTemperaturas(minimo, maximo, incremento);
    	
    	model.addAttribute("lista", lista);
    	
    	return "lista";
    }

    private static List<Temperaturas> listaTemperaturas(int minimo, int maximo, int incremento) {
        List<Temperaturas> lista = new ArrayList<>();
        for (double celsius = minimo; celsius <= maximo; celsius += incremento) {
            double fahrenheit = converte(celsius);
            Temperaturas temperatura = new Temperaturas(celsius, fahrenheit);
            lista.add(temperatura);
        }

        return lista;
    }

    private static double converte(double x) {
        return x * 1.8 + 32;
    }
}
