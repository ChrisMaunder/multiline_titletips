# Multiline Titletips

A class that allows you to display data for a control that is otherwise not large enough to display the full text





![Sample Image - Multiline_Titletips.gif](https://raw.githubusercontent.com/ChrisMaunder/multiline_titletips/master/docs/assets/multiline_titletips.gif)

<!-- Article Starts -->

A titletip is similar to a tooltip, but is used to 
display data in a control that is otherwise not large enough to display the full 
text. We are all used to seeing cell titletips that display contents that are hidden by 
the width of the cell. These titletips typically use a single line. If the contents are
greater than the single line, they were truncated.  

The code presents a titletip class that can show the 
complete contents of a cell regardless of its size. The titletip window will 
adjust itself up or down depending on the cell being displayed, and will take 
into account the size of the parent's client area, and that of the screen. It will do its utmost to show you that data! 

This article is based on code written by Zafir 
Anjum, but has been extensively reworked to add a great deal of new 
functionality.

## How to use CTitleTip

Using the class is extremely easy. Just declare an object of type 
`CTitleTip` in your main windows' header, and then create the 
title tip window in your dialog's `OnInitDialog`, or your
view's `OnInitialUpdate`:

```cpp
// dialog header file
class CTitleTipDemoDlg : public CDialog
{
...

CTitleTip m_TitleTip;
}
```

```cpp
BOOL CTitleTipDemoDlg::OnInitDialog()
{
CDialog::OnInitDialog();
...
m_TitleTip.Create(this);

return TRUE;  // return TRUE  unless you set the focus to a control
}
```

You then need to add a mouse over handler so that when the mouse cursor
moves over controls that may contain large amounts of text, you can popup
a title tip to display that text. For instance, in our demo dialog we have
a static control (`m_staticText`) that displays a lot of text.
Just add an `OnMouseMove` handler and add the following code:

```cpp
void CTitleTipDemoDlg::OnMouseMove(UINT nFlags, CPoint point) 
{
// Get the dimensions of the static control
CRect rect;
m_staticText.GetWindowRect(rect);
ScreenToClient(rect);

// If the mouse is over the control, display the titletip. 
// Note: The title tip will only be displayed if the text
// in the static control is too large for the static control
if (rect.PtInRect(point))
{
    CString str;
    m_staticText.GetWindowText(str);
    m_TitleTip.Show(rect, str, 0, 80);
}

CDialog::OnMouseMove(nFlags, point);
}
```

The `CTitleTip::Show` function has the following syntax

```cpp
void Show(CRect rectTitle,            // Bounds of the control containing the text
          LPCTSTR lpszTitleText,      // The text to display
          int xoffset = 0,            // offset to display text within title tip
          int nMaxChars = -1,         // Maximum number of characters per line to display
          LPRECT lpHoverRect = NULL,  // Once the mouse moves outside of this
                                      //   rect, the title tip will disappear
          LPLOGFONT lpLogFont = NULL) // The font in which to display the text
```

If *nMaxChars*  is less than 0, then the text will only wrap where there is insufficient room
to display the entire line.

if *lpHoverRect*  is NULL then it will be set as *rectTitle*.
