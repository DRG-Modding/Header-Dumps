#ifndef UE4SS_SDK_ITM_Pickaxe_MaterialBox_HPP
#define UE4SS_SDK_ITM_Pickaxe_MaterialBox_HPP

class UITM_Pickaxe_MaterialBox_C : public UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UButton* Button_Color;
    class UBorder* ColorBorder;
    class UBorder* ColorBrackets;
    class UImage* Image_Icon;
    class UITM_ItemUnlockedIcon_C* NotificationIcon;
    class UPickaxePart* Item;
    FITM_Pickaxe_MaterialBox_CClicked Clicked;
    void Clicked(class UITM_Pickaxe_MaterialBox_C* Item);
    class UPlayerCharacterID* Character;
    bool HasNotification;

    void Construct();
    void BndEvt__Button_0_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature();
    void Unselect();
    void Select();
    void ApplyColor();
    void ExecuteUbergraph_ITM_Pickaxe_MaterialBox(int32 EntryPoint, class UPickaxeMaterialPart* K2Node_DynamicCast_AsPickaxe_Material_Part, bool K2Node_DynamicCast_bSuccess, FLinearColor CallFunc_MenuColors_OutputColor, class UGameData* CallFunc_GetFSDGameData_ReturnValue, TArray<class UObject*>& K2Node_MakeArray_Array);
    void Clicked__DelegateSignature(class UITM_Pickaxe_MaterialBox_C* Item);
};

#endif
