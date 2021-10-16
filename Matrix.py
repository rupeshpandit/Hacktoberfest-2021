
class MATRIX():
    def __init__(self,count):
        self.count = int(count)
        self.mat = MATRIX.Insert(self)
    
    
    def Main():
       pass 
        
    def Insert(self):
        print("------------------Enter numbers row wise------------------\n")
        block=[]
        cblock=[]
        for i in range(self.count):
            cblock=[]
            for j in range(self.count):
                cblock.append(int(input()))
            block.append(cblock)    
        MATRIX.Show(block,self.count)
        return(block)
    def Show(view,size):
        print("----"*size)
        for i in range(size):
            print(view[i])
        print("----"*size)
        
    def ConstQuot(self,const,row):
        for i in range(self.count):
            self.mat[row-1][i] = self.mat[row-1][i] / const
        MATRIX.Show(self.mat,self.count)
    def ConstProd(self,const,row):
        for i in range(self.count):
            self.mat[row-1][i] = self.mat[row-1][i] * const
        MATRIX.Show(self.mat,self.count)            
    def ConstDiff(self,const,row):
        for i in range(self.count):
            self.mat[row-1][i] = self.mat[row-1][i] - const
        MATRIX.Show(self.mat,self.count) 
    def ConstSum(self,const,row):
        for i in range(self.count):
            self.mat[row-1][i] = self.mat[row-1][i] + const 
        MATRIX.Show(self.mat,self.count)        



matrix1=MATRIX(input("------------------Enter the no of rows of the matrix------------------\n"),)
MATRIX.ConstSum(matrix1,3,1)
MATRIX.ConstDiff(matrix1,3,2)
MATRIX.ConstProd(matrix1,3,1)
MATRIX.ConstQuot(matrix1,3,2)








       
