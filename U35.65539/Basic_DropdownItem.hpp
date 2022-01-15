#ifndef UE4SS_SDK_Basic_DropdownItem_HPP
#define UE4SS_SDK_Basic_DropdownItem_HPP

class UBasic_DropdownItem_C : UUserWidget
{
    UBasic_Menu_MinimalWindow_C* BasicWindow_Minimal;
    UTextBlock* DropdownText;

    FText GetDropdownText();
}

#endif
