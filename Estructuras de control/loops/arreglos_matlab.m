clc, clear all, close all;
%%
% *Arrays*
%%
% _definicion_ 
a = [1 2 3 4 5] % arreglo
m = [1 2 3; 4 5 6; 7 8 9; 10 11 12] % matriz
m(1,2) % acceder a elementos 1ra fila 2da columna
a(2),m(2); %elementos especificos
a(2:4) % elementos del 2 al 4 del arreglo
m(2:4,2) % tomar filas 2-3-4 de la columna 2

b = linspace(-5,5,7) % distribucion equitativa en rango de -5 a 5 con 7 puntos de igual espacio
a = -5:7:5;
%%
% |ejemplos|

% suma de los elementos de un arreglo

vector = [2 3 4 5 6 ];
resultado_suma  = 0; 

for (i = 1:length(vector)) % ( i  = 0: length(vector)- 1)
 disp(i); % indica que proceso se realiza desde la primera posicion
 resultado_suma = resultado_suma + vector(i);
 i = i + 1;
end
resultado_suma 

resultado_multiplicacion  = 1; 

for (i = 1:length(vector)) % ( i  = 0: length(vector)- 1)
 vector(i)
 resultado_multiplicacion = resultado_multiplicacion * vector(i);
 i = i + 1;
end
resultado_multiplicacion

%%

lim_inferior = 0; lim_superior = 6; puntos = 6;
rango = lim_superior - lim_inferior;
even_index = rango / puntos;
arreglo = [];
for(i = 0: 6)
    arreglo(i)= lim_inferior;
    lim_inferior = lim_inferior + even_index;

end
arreglo = []

%%

for (i = 10:1 )
    disp(i)
    i = i - 1;
end

for (i = 10:-2 : 1 )
    disp(i);
end

vector = [2 3 4 5 6 ];

for (i = length(vector):-1 : 1 )
    vector(i), disp(i+1) % para igualarlos
    vector(i), disp(i);
end

%%
for(fila = 0:4)
    columna = 0;
    while(columna ~= fila )
        disp(columna)
        columna = columna +1;
        disp('--');
    end
        
end