// schemas/pet.js
export default {
    name: 'pet',
    type: 'document',
    title: 'Animal Domestico',
    fields: [
      {
        name: 'nome',
        type: 'string',
        title: 'nome'
      },
      {
        name: 'raca',
        type: 'string',
        title: "raça"
      },
      {
        name: 'Idade',
        type: 'number',
        title: "Idade"
      }
    ]
  }