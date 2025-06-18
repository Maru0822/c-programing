import java.io.*;

class Stdin 
{
	BufferedReader reader;

    Stdin()
	{
		reader = new BufferedReader(new InputStreamReader(System.in));
    }

    String gets()
	{
        String line = "";
        boolean flg = true;
        while(flg)
		{
            try 
			{
                line = reader.readLine();
                flg = false;
            }
			catch (IOException e) 
			{
                System.out.println(e);
            }
        }
	    return line;
    }

    int geti()
	{
        int n = 0;
        boolean flg = true;
        while(flg)
		{
            try 
			{
                n = Integer.parseInt(reader.readLine());
                flg = false;
            }
			catch (IOException e) 
			{
                System.out.println(e);
            } 
			catch (NumberFormatException e) 
			{
                System.out.println(e);
            }
        }
        return n;
    }

    double getd()
	{
        double d = 0.0;
        boolean flg = true;
        while(flg)
		{
            try 
			{
                d = Double.parseDouble (reader.readLine());
                flg = false;
            } 
			catch (IOException e) 
			{
                System.out.println(e);
            } 
			catch (NumberFormatException e) 
			{
                System.out.println(e);
            }
        }
        return d;
    }
}
