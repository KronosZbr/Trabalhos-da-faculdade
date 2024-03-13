function tome(chaves, valores) {
    const mapa = new Map();
  
    for (let i = 0; i < chaves.length; i++) {
      mapa.set(chaves[i], valores[i]);
    }
  
    return mapa;
  }
  
  const chaves = ["nome", "idade", "cidade"];
  const valores = ["João", 25, "São Paulo"];
  const mapa = tome(chaves, valores);
  console.dir(mapa);