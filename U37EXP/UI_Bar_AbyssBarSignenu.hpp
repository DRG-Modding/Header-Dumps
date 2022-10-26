#ifndef UE4SS_SDK_UI_Bar_AbyssBarSignenu_HPP
#define UE4SS_SDK_UI_Bar_AbyssBarSignenu_HPP

class UUI_Bar_AbyssBarSignenu_C : public UBarMenuWidget
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UBasic_Menu_ColorBar_C* Basic_Menu_ColorBar;
    class UBasic_Menu_ColorBar_C* Basic_Menu_ColorBar_C_0;
    class UBorder* MenuBorder;
    class UTextBlock* MenuHeader;
    class UTextBlock* TextBlock_2;
    class ASpaceRigBar* BarActor;
    FUI_Bar_AbyssBarSignenu_COnRoundSelected OnRoundSelected;
    void OnRoundSelected(class ASpaceRigBar* Bar, class UDrinkableDataAsset* RequestedDrink);

    void PreConstruct(bool IsDesignTime);
    void ExecuteUbergraph_UI_Bar_AbyssBarSignenu(int32 EntryPoint);
    void OnRoundSelected__DelegateSignature(class ASpaceRigBar* Bar, class UDrinkableDataAsset* RequestedDrink);
};

#endif
