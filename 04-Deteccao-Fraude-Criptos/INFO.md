# Deep Learning para detecção de fraudes em transações financeiras com criptomoedas

Neste projeto vamos aplicar DeepLearning na área financeira e construir um modelo capaz de identificar transações fraudulentas.

## O que são Criptomoedas?

Criptomoedas são formas de moeda digital que utilizam criptografia para garantir transações seguras e para controlar a criação de novas unidades.

Elas operam em uma tecnologia chamada blockchain, que é um tipo de livro-razão digital distribuído e descentralizado.

O **Bitcoin** foi a primeira criptomoeda a ser criada em 2009 e desde então muitas outras foram desenvolvidas, cada uma com suas características próprias.

As criptomoedas permitem transações financeiras sem a necessidade de intermediários, como bancos, e são conhecidas por sua natureza descentralizada e pela possibilidade de transferência de valor globalmente, com taxas de transação relativamente baixas em comparação com métodos tradicionais.

### Principais características das criptomoedas

**Descentralização**: Não são controladas por uma entidade central, como um banco ou governo. A rede é distribuída entre os participantes, o que a torna menos vulnerável a falhas centralizadas.

**Segurança**: Utilizam técnicas de criptografia para proteger as transações e os saldos, reduzindo fraudes e falsificações.

**Transparência**: As transações são registradas em um livro-razão público, o blockchain, que pode ser visualizado por qualquer pessoa, mantendo a transparência.

**Anonimato/Pseudonimato**: Embora as transações sejam públicas, os usuários geralmente são identificados por endereços digitais, não por informações pessoais, proporcionando algum grau de anonimato.

**Imutabilidade**: As transações registradas no blockchain não podem ser alteradas ou removidas, criando um histórico de transações inalterável.

**Programabilidade**: Algumas criptomoedas, como o Ethereum, permitem a execução de contratos inteligentes (smart contracts), programas que executam automaticamente transações com base em certas condições.

**Oferta Limitada**: Muitas criptomoedas têm um suprimento máximo predefinido, como o Bitcoin, que tem um limite de 21 milhões de moedas, o que pode influenciar no seu valor ao longo do tempo.

**Transferibilidade Global**: Podem ser transferidas para qualquer lugar do mundo com uma conexão à internet, geralmente com taxas menores do que os métodos tradicionais de transferência de dinheiro.

**Volatilidade**: Os preços das criptomoedas podem ser altamente voláteis devido à especulação, regulamentação e adoção do mercado.

### Como acontece uma transação de Criptomoeda?

Vamos considerar a rede Ethereum, cuja criptomoeda é o Ether, para descrever uma transação de criptomoeda. Consulte os links úteis ao final do capítulo com as referências.

Uma transação na rede Ethereum segue estas etapas principais:

1- **Criação da Transação**: O remetente cria uma transação que inclui:

- Endereço do destinatário.
- Quantidade de Ether a ser enviada.
- Gas limit: limite máximo de unidades de gas que podem ser usadas na transação.
- Gas price: preço a pagar por cada unidade de gas.
- Dados opcionais, como o código de um contrato inteligente.

Gas é o nome dado ao consumo de recurso computacional para processar a transação.

2- **Assinatura**: A transação é assinada digitalmente com a chave privada do remetente, garantindo sua autenticidade e a propriedade dos fundos.

3- **Envio para a Rede:** A transação é transmitida para a rede Ethereum, sendo recebida pelos nós participantes.

4- **Inclusão na MemPool**: A transação é adicionada à mempool, onde aguarda para ser incluída em um bloco. Os mineradores selecionam as transações da mempool, geralmente priorizando aquelas com taxas de gas mais altas.

5- **Mineração e Validação**: Um minerador inclui a transação em um bloco. Esse bloco é validado pelo algoritmo de consenso Proof-of-Work (PoW) ou Proof-of-Stake (PoS), dependendo da versão do Ethereum.

6- **Inclusão no Blockchain**: Uma vez que um bloco é validado ele é anexado ao blockchain e a transação é considerada confirmada. O número de confirmações necessárias para a transação ser considerada final depende do uso pretendido.

7- **Atualização dos Saldos:** Após a inclusão da transação no blockchain, os saldos das contas do remetente e do destinatário são atualizados, refletindo a transferência de Ether.

8- **Recebimento do Destinatário**: O destinatário pode visualizar a transação e o saldo atualizado em sua carteira, confirmando a recepção dos fundos.

Além de transações simples de envio de Ether, a rede Ethereum permite transações que executam contratos inteligentes, o que pode desencadear execuções complexas de código no blockchain.

Usaremos esses dados de transações no Projeto.

## O que é Detecção de Fraudes e Anomalias?

A detecção de fraudes e anomalias é um conjunto de técnicas e métodos utilizados para identificar atividades fraudulentas, comportamentos incomuns ou padrões suspeitos em um determinado sistema, conjunto de dados ou ambiente. 

Isso pode ser aplicado em diversas áreas, como sistemas financeiros, segurança cibernética, saúde, entre outros.

Essas técnicas geralmente envolvem a análise de grandes volumes de dados em busca de padrões incomuns ou atividades que desviem do padrão esperado.

Alguns métodos comuns incluem:

1. **Análise estatística**: Utilização de técnicas estatísticas para identificar desvios significativos nos dados que possam indicar fraudes ou anomalias.

2. **Aprendizado de máquina**: Algoritmos de aprendizado de máquina são treinados com dados históricos para identificar padrões e comportamentos fraudulentos. Isso inclui técnicas como árvores de decisão, redes neurais, entre outras.

3. **Mineração de dados**: Exploração de grandes conjuntos de dados em busca de padrões, tendências ou relações que possam indicar atividades fraudulentas.

4. **Regras e heurísticas**: Desenvolvimento de regras ou heurísticas específicas que ajudam a identificar comportamentos suspeitos com base em conhecimento prévio do domínio.

5. **Análise de grafos**: Identificação de anomalias em redes complexas, como redes sociais ou redes de transações financeiras, analisando os relacionamentos entre os nós.