clc , clear al , close all
%%
% * Transpuesta de una matriz* 

% consiste en intercambiar filas por columnas
% ejemplo: 
%   1 2 3         1 4 7 
%   4 5 6    =>   2 5 8
%   7 8 9         3 6 9


a = [1 2 3; 4 5 6; 7 8 10] ;

% length(a)  = 3  ; a(1:end) = 1     4     7     2     5     8     3     6    10
% a(1,1:end) =   1     2     3
% a(1,:) =    1     2     3

iLen = length(a(1,:)) ;
jLen = length(a(:,1)) ;

for i = 1 : iLen
    for j = 1 : jLen 
        transpuesta(i,j) = a(j,i) ;
    end
    
end
transpuesta

%%
% *matriz simetrica*
% si la transpuesta es igual a la matriz cuadrada
a = [1 2 3; 2 4 5; 3 5 6] ;
bandera = 'falso' ;  % se inicia asumiendo que la matriz no es transpuesta por medio d euna bandera
iLen = length(a(1,:)) ;
jLen = length(a(:,1)) ;

if (iLen == jLen)  % verifica si es cuadrada  
    for i = 1 : iLen
        for j = 1 : jLen 
            
            if   a(i,j) == a(j,i) % a(i,j) == transpuesta(i,j)
                bandera = 'verdadero' ;
                
            end
        
        end
    
    end   
end

if bandera == 'verdadero'
    disp('matriz es simetrica')
else
    disp('matriz es NO simetrica')
end




%__
% https://www.mathworks.com/help/matlab/learn_matlab/matrices-and-arrays.html
% https://www.mathworks.com/company/newsletters/articles/matrix-indexing-in-matlab.html
% https://es.wikipedia.org/wiki/Matriz_transpuesta
% re array and reshape
% https://www.mathworks.com/help/matlab/math/reshaping-and-rearranging-arrays.html