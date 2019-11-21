import java.awt.*;
import java.applet.*;
import java.awt.event.*;
/*<applet code=MyAppletColor.class width=1000 height=900></applet>*/
public class MyAppletColor extends Applet implements ActionListener
{
Button S_red,S_blue,S_green,S_cayan;
public void init()
{
    S_red=new Button("RED");
	add(S_red);
	S_green=new Button("GREEN");
	add(S_green);
	S_blue=new Button("BLUE");
	add(S_blue);
	S_cayan=new Button("CYAN");
	add(S_cayan);
	S_red.addActionListener(this);
	S_blue.addActionListener(this);
	S_green.addActionListener(this);
	S_cayan.addActionListener(this);

}
public void actionPerformed(ActionEvent ae)
{
if(ae.getSource()==S_red)
{
	setBackground(Color.red);
}
if(ae.getSource()==S_blue)
{
	setBackground(Color.blue);
}
if(ae.getSource()==S_green)
{
	setBackground(Color.green);
}
if(ae.getSource()==S_cayan)
{
	setBackground(Color.cyan);
}
}
}



