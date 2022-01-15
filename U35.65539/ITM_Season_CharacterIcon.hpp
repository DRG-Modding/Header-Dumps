#ifndef UE4SS_SDK_ITM_Season_CharacterIcon_HPP
#define UE4SS_SDK_ITM_Season_CharacterIcon_HPP

class UITM_Season_CharacterIcon_C : UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;
    UImage* Image_Driller;
    UImage* Image_Engineer;
    UImage* Image_Gunner;
    UImage* Image_Scout;

    void SetData(UPlayerCharacterID* characterID, const bool ShowIcon);
    void ExecuteUbergraph_ITM_Season_CharacterIcon(int32 EntryPoint, ESlateVisibility Temp_byte_Variable, ESlateVisibility Temp_byte_Variable_1, UPlayerCharacterID* K2Node_CustomEvent_characterID, const bool K2Node_CustomEvent_ShowIcon, bool CallFunc_SelectVisibility_IsVisible, bool CallFunc_SelectVisibility_VisibilityChanged, ESlateVisibility CallFunc_SelectVisibility_New_Visibility, bool CallFunc_EqualEqual_ObjectObject_ReturnValue, bool CallFunc_EqualEqual_ObjectObject_ReturnValue_1, bool CallFunc_EqualEqual_ObjectObject_ReturnValue_2, bool CallFunc_EqualEqual_ObjectObject_ReturnValue_3, bool CallFunc_IsValid_ReturnValue, bool Temp_bool_Variable, ESlateVisibility K2Node_Select_Default);
}

#endif
