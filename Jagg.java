import java.lang.*;
import java.util.*;

class Jagg
{
    public static void main(String a[])
    {
        Scanner sobj = new Scanner(System.in);

      System.out.println("Enter string :");
      String str =sobj.nextLine();

    String word ="";

    String large ="";

    String small="";

    str = str+' ';

    for(int i=0;i< str.length();i++)
    {
        char ch=str.charAt(i);
        if(ch !=' ')
        {
            word = word+ch;
          
        }
        else if(word.length() >large.length())
        {
            large = word;

            word ="";
        }
       
    }

    System.out.println("Largest word is :"+large);
    System.out.println("Smallest word is :"+small);


        
    }
}