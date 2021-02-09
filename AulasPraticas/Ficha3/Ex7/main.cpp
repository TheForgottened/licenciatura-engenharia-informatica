#include <iostream>
#include "pessoa.h"
#include "conta.h"
#include "banco.h"

int main(){
    Pessoa p1("Ana Silva", 123456, 111222333);
    Pessoa p2("Bruno Pato", 567890, 444555666);
    Pessoa p3("Luisa Alves", 111222, 567089123);
    
    Banco b1("CGD");        // 1. Fazer construtor
    Banco b2("BEST");
    
    b1.addConta(&p1);        // 2. addConta() - titular só pode ter uma conta nesse banco
    b1.addConta(&p2);
    b1.addConta(&p3);
    
    b2.addConta(&p2);
    b2.addConta(&p3);
    
    b1.atualizaSaldo(123456, 50);       // 3. Atualiza saldo dado número de cc do titular
    b1.atualizaSaldo(123456, -30);
    b1.atualizaSaldo(123456, -50);
    b1.atualizaSaldo(567890, 200);
    b2.atualizaSaldo(567890, 100);
    b2.atualizaSaldo(111222, 501);
    
    cout << b1.obterSaldo(123456) << endl;  // 4. Obter saldo do cliente com cc
    
    cout << b2.getTotalSaldos() << endl;    // 5. Devolver o total de saldos de todas as contas     

    cout << b1.getAsString() << endl;       // 6. Obter descrição textual completa do banco
    cout << b2.getAsString() << endl;
    
    return 0;
}