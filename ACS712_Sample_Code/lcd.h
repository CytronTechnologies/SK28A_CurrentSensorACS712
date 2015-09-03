/*******************************************************************************
lcd.h
*******************************************************************************/



#ifndef _LCD_H
#define _LCD_H
#define _XTAL_FREQ 20000000	    //using 20MHz	


/*******************************************************************************
* PUBLIC FUNCTION PROTOTYPES                                                   *
*******************************************************************************/

/*******************************************************************************
* PUBLIC FUNCTION: lcd_init
*
* PARAMETERS:
* ~ void
*
* RETURN:
* ~ void
*
* DESCRIPTIONS:
* Initialize and clear the LCD display.
*
*******************************************************************************/
extern void lcd_init(void);



/*******************************************************************************
* PUBLIC FUNCTION: lcd_clr
*
* PARAMETERS:
* ~ void
*
* RETURN:
* ~ void
*
* DESCRIPTIONS:
* Clear the LCD display and return the cursor to the home position.
*
*******************************************************************************/
extern void lcd_clr(void);



/*******************************************************************************
* PUBLIC FUNCTION: lcd_home
*
* PARAMETERS:
* ~ void
*
* RETURN:
* ~ void
*
* DESCRIPTIONS:
* Return the cursor to the home position.
*
*******************************************************************************/
extern void lcd_home(void);



/*******************************************************************************
* PUBLIC FUNCTION: lcd_2ndline
*
* PARAMETERS:
* ~ void
*
* RETURN:
* ~ void
*
* DESCRIPTIONS:
* Jump to the second line of the LCD display.
*
*******************************************************************************/
extern void lcd_2ndline(void);



/*******************************************************************************
* PUBLIC FUNCTION: lcd_goto
*
* PARAMETERS:
* ~ uc_position	- The position that we want to set the cursor at.
*
* RETURN:
* ~ void
*
* DESCRIPTIONS:
* Jump to the defined position of the LCD display.
*
*******************************************************************************/
extern void lcd_goto(unsigned char uc_position);



/*******************************************************************************
* PUBLIC FUNCTION: lcd_putchar
*
* PARAMETERS:
* ~ c_data	- The character to display.
*
* RETURN:
* ~ void
*
* DESCRIPTIONS:
* Display a character on the LCD.
*
*******************************************************************************/
extern void lcd_putchar(char c_data);



/*******************************************************************************
* PUBLIC FUNCTION: lcd_putstr
*
* PARAMETERS:
* ~ csz_string	- The null terminated string to display.
*
* RETURN:
* ~ void
*
* DESCRIPTIONS:
* Display a string on the LCD.
*
*******************************************************************************/
extern void lcd_putstr(const char* csz_string);


/*******************************************************************************
* PUBLIC FUNCTION: lcd_bcd
*
* PARAMETERS:
* ~ uc_digit, ui_number
*
* RETURN:
* ~ void
*
* DESCRIPTIONS:
* convert the value in ui_number to BCD(Binary Code Decimal) and display the digit according to uc_digit needed.
*
*******************************************************************************/
void lcd_bcd(unsigned char uc_digit, unsigned int ui_number);

/*******************************************************************************
* PRIVATE FUNCTION: lcd_clear_msg
*
* PARAMETERS:
* ~ csz_string	- The null terminated string to display.
*
* RETURN:
* ~ void
*
* DESCRIPTIONS:
* clear LCD and display message on LCD
*
*******************************************************************************/
void lcd_clear_msg(const char* csz_string);


#endif
