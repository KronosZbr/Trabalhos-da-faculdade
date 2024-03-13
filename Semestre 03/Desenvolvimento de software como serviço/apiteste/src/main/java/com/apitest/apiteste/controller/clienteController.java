package com.apitest.apiteste.controller;

import java.util.List;

import org.springframework.web.bind.annotation.GetMapping;
import org.springframework.web.bind.annotation.RequestMapping;
import org.springframework.web.bind.annotation.RestController;

@RestController
@RequestMapping("/clientes")
public class clienteController {

	@GetMapping
	public List<Cliente>listar(){
		
	}
	
	
}
