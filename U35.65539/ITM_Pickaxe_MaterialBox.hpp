#ifndef UE4SS_SDK_ITM_Pickaxe_MaterialBox_HPP
#define UE4SS_SDK_ITM_Pickaxe_MaterialBox_HPP

class UITM_Pickaxe_MaterialBox_C : UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;
    UButton* Button_Color;
    UBorder* ColorBorder;
    UBorder* ColorBrackets;
    UImage* Image_Icon;
    UITM_ItemUnlockedIcon_C* NotificationIcon;
    UPickaxePart* Item;
    FITM_Pickaxe_MaterialBox_CClicked Clicked;
    void Clicked(UITM_Pickaxe_MaterialBox_C* Item);
    UPlayerCharacterID* Character;
    bool HasNotification;

    void Construct();
    void BndEvt__Button_0_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature();
    void Unselect();
    void Select();
    void ApplyColor();
    void ExecuteUbergraph_ITM_Pickaxe_MaterialBox(int32 EntryPoint, UPickaxeMaterialPart* K2Node_DynamicCast_AsPickaxe_Material_Part, bool K2Node_DynamicCast_bSuccess, FLinearColor CallFunc_MenuColors_OutputColor, UGameData* CallFunc_GetFSDGameData_ReturnValue, TArray<UObject*>& K2Node_MakeArray_Array);
    void Clicked__DelegateSignature(UITM_Pickaxe_MaterialBox_C* Item);
}

#endif
