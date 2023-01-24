#ifndef UE4SS_SDK_Itm_MinersManual_TabsHeader_HPP
#define UE4SS_SDK_Itm_MinersManual_TabsHeader_HPP

class UItm_MinersManual_TabsHeader_C : public UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UHorizontalBox* HorizontalBox_Back;
    class UImage* Image_BG;
    class UItm_HeaderCategory_C* Itm_HeaderCategory0;
    class UItm_HeaderCategory_C* Itm_HeaderCategory1;
    class UUI_AdvancedLabel_C* UI_AdvancedLabel;
    TArray<class UItm_HeaderCategory_C*> Tabs;
    class U_MENU_MinersManual_C* _Menu_Lore;
    int32 CurrIndex;

    void SetSelected(int32 Index, FText HeaderText);
    void Construct();
    void BndEvt__Itm_HeaderCategory1_K2Node_ComponentBoundEvent_0_OnClicked__DelegateSignature();
    void BndEvt__Itm_HeaderCategory2_K2Node_ComponentBoundEvent_1_OnClicked__DelegateSignature();
    void SetData(class U_MENU_MinersManual_C* _Menu_Lore);
    void ExecuteUbergraph_Itm_MinersManual_TabsHeader(int32 EntryPoint);
};

#endif
