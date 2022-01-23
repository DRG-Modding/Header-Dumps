#ifndef UE4SS_SDK_ITM_Season_CharacterIcon_HPP
#define UE4SS_SDK_ITM_Season_CharacterIcon_HPP

class UITM_Season_CharacterIcon_C : public UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UImage* Image_Driller;
    class UImage* Image_Engineer;
    class UImage* Image_Gunner;
    class UImage* Image_Scout;

    void SetData(class UPlayerCharacterID* characterID, const bool ShowIcon);
    void ExecuteUbergraph_ITM_Season_CharacterIcon(int32 EntryPoint, ESlateVisibility Temp_byte_Variable, ESlateVisibility Temp_byte_Variable_1, class UPlayerCharacterID* K2Node_CustomEvent_characterID, const bool K2Node_CustomEvent_ShowIcon, bool CallFunc_SelectVisibility_IsVisible, bool CallFunc_SelectVisibility_VisibilityChanged, ESlateVisibility CallFunc_SelectVisibility_New_Visibility, bool CallFunc_EqualEqual_ObjectObject_ReturnValue, bool CallFunc_EqualEqual_ObjectObject_ReturnValue_1, bool CallFunc_EqualEqual_ObjectObject_ReturnValue_2, bool CallFunc_EqualEqual_ObjectObject_ReturnValue_3, bool CallFunc_IsValid_ReturnValue, bool Temp_bool_Variable, ESlateVisibility K2Node_Select_Default);
};

#endif
