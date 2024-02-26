## Implementação de DHT em C++ com Casos de Teste - Thiago Goulart
<a href="https://replit.com/join/aqqhynyrsc-thigoulart">Link do Replit</a>

### Caso de Teste 1: Inserir um Item na Tabela Hash
<figure>
  <figcaption style="text-align: center;">Figura 1 - Caso de teste 1</figcaption>
  <img src="../assets/caso1" style="display: block; margin: auto;" alt="Caso de teste 1"></img>
  <figcaption style="text-align: center;">Fonte: Autoria Própria.</figcaption>
</figure>

- **Descrição**: Testa a capacidade de inserir um novo item na tabela hash.
- **Pré-Condição**: Enviar um inteiro como "ID" do produto e seu nome correspondente para ser inserido na tabela hash.
- **Etapas do Teste**:
    1. Chamar a função de inserção de item na tabela hash, fornecendo um ID e um nome de produto.
    2. Obter o índice resultante da função de hash para o ID fornecido.
    3. Verificar se o item foi inserido corretamente na posição indicada pelo índice resultante da função de hash.
- **Pós-Condição**: O item deve ser inserido com sucesso na tabela hash na posição determinada pela função de hash.

### Caso de Teste 2: Deletar um Item da Tabela Hash
<figure>
  <figcaption style="text-align: center;">Figura 2 - Caso de teste 2</figcaption>
  <img src="../assets/caso1" style="display: block; margin: auto;" alt="Caso de teste 2"></img>
  <figcaption style="text-align: center;">Fonte: Autoria Própria.</figcaption>
</figure>

- **Descrição**: Testa a capacidade de excluir um item da tabela hash com base em sua chave (ID).
- **Pré-Condição**: O item correspondente ao ID a ser deletado deve existir na tabela hash.
- **Etapas do Teste**:
    1. Chamar a função de exclusão do item da tabela hash, fornecendo o ID do item a ser removido.
    2. Verificar se o item e seu ID foram removidos corretamente da tabela hash.
- **Pós-Condição**: O item e seu ID devem ser removidos com sucesso da tabela hash.

### Caso de Teste 3: Tratamento de Colisões ao Inserir um Item
<figure>
  <figcaption style="text-align: center;">Figura 3 - Caso de teste 3</figcaption>
  <img src="../assets/caso1" style="display: block; margin: auto;" alt="Caso de teste 3"></img>
  <figcaption style="text-align: center;">Fonte: Autoria Própria.</figcaption>
</figure>

- **Descrição**: Testa o tratamento de colisões ao inserir um novo item na tabela hash.
- **Pré-Condição**: Enviar um inteiro como "ID" do produto e seu nome correspondente para ser inserido na tabela hash. Também, garantir que já exista um produto vinculado a um "ID" na mesma posição da tabela hash.
- **Etapas do Teste**:
    1. Chamar a função de inserção de item na tabela hash, inserindo um novo item que resulte em colisão.
    2. Obter o índice resultante da função de hash para o novo ID fornecido.
    3. Verificar se o novo item foi inserido corretamente na próxima posição disponível na tabela hash, após resolver a colisão.
- **Pós-Condição**: O novo item deve ser inserido com sucesso na próxima posição vazia na tabela hash, evitando a colisão com o item já existente.

### Caso de Teste 4: Buscar um Item com Base no ID
<figure>
  <figcaption style="text-align: center;">Figura 4 - Caso de teste 4</figcaption>
  <img src="../assets/caso1" style="display: block; margin: auto;" alt="Caso de teste 4"></img>
  <figcaption style="text-align: center;">Fonte: Autoria Própria.</figcaption>
</figure>

- **Descrição**: Testa a capacidade de buscar um item na tabela hash com base no seu ID.
- **Pré-Condição**: Inserir um "ID" com um produto correspondente já existente na tabela hash.
- **Etapas do Teste**:
    1. Chamar a função de busca do item na tabela hash utilizando o ID inserido previamente.
    2. Verificar se o produto com o ID inserido inicialmente é retornado corretamente.
- **Pós-Condição**: O produto com o ID inserido inicialmente deve ser encontrado e impresso corretamente.

### Caso de Teste 5: Inserir um Item e Buscar Pelo ID
<figure>
  <figcaption style="text-align: center;">Figura 5 - Caso de teste 5</figcaption>
  <img src="../assets/caso1" style="display: block; margin: auto;" alt="Caso de teste 5"></img>
  <figcaption style="text-align: center;">Fonte: Autoria Própria.</figcaption>
</figure>

- **Descrição**: Testa a capacidade de inserir um item no contrato e, em seguida, buscar o produto inserido com base no ID.
- **Pré-Condição**: 
    - Certificar-se de que uma carteira no Metamask está vinculada ao Remix IDE para interagir com o contrato.
    - Realizar o deploy do contrato que contém o código no ambiente de teste do Remix.
- **Etapas do Teste**:
    1. Utilizar a função `adicionarProduto` do contrato para inserir um novo item, fornecendo um ID e um nome de produto.
        - Enviar um ID e o nome do produto como parâmetros para a função `adicionarProduto`.
        - Executar a transação para adicionar o produto ao contrato.
    2. Utilizar a função `buscarProduto` do contrato para buscar o produto inserido, fornecendo o ID do produto.
        - Informar o ID do produto previamente inserido como parâmetro para a função `buscarProduto`.
        - Executar a consulta para encontrar o produto com base no ID.
- **Pós-Condição**: 
    - Após a execução bem-sucedida das etapas do teste:
        - O produto inserido deve ser encontrado com sucesso ao utilizar a função `buscarProduto` com o ID correspondente.
        - O nome do produto retornado deve ser igual ao nome do produto inserido durante a etapa de adição.

