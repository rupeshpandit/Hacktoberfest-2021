import java.io.*;
import java.util.*;

public class Main {

    public static void main(String[] args) throws Exception {
        
        Scanner scn = new Scanner (System.in);
        int n =scn.nextInt();
        int[][] chess=new int [n][n];
        int r=scn.nextInt();
        int c=scn.nextInt();
        printKnightsTour(chess,r,c,0);
        
    }

    public static void printKnightsTour(int[][] chess, int r, int c, int upcomingMove) {
        if(r<0 || r==chess.length || c<0 || c==chess.length ){
            return;
        }
        if(upcomingMove+1==(chess.length)*(chess.length)){
            displayBoard(chess);
            return;
        }
        chess[r][c]=upcomingMove+1;
        
         printKnightsTour(chess,r-2,c+1,upcomingMove+1);
         printKnightsTour(chess,r-1,c+2,upcomingMove+1);
         printKnightsTour(chess,r+1,c+2,upcomingMove+1);
         printKnightsTour(chess,r+2,c+1,upcomingMove+1);
         printKnightsTour(chess,r+2,c-1,upcomingMove+1);
         printKnightsTour(chess,r+1,c-2,upcomingMove+1);
         printKnightsTour(chess,r-1,c-2,upcomingMove+1);
         printKnightsTour(chess,r
