#ifndef UE4SS_SDK_ITM_DeepDiveHeader_HPP
#define UE4SS_SDK_ITM_DeepDiveHeader_HPP

class UITM_DeepDiveHeader_C : UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;
    UImage* Image_188;
    UImage* Image_304;
    UITM_DeepDiveHeaderElite_C* ITM_DeepDiveHeaderElite;
    UShadowBG_C* ShadowBG;
    USizeBox* SizeBox_0;
    UTextBlock* TXT_DeepDive_BG;
    UTextBlock* TXT_DeepDive_Front;
    FText Header Contents;
    bool EliteActive;

    void FromActiveDeepDive(UDeepDiveManager* CallFunc_GetDeepDiveManager_ReturnValue, UDeepDive* CallFunc_GetActiveDeepDive_ReturnValue);
    void FromDeepDive(UDeepDive* InDeepDive, bool CallFunc_IsDeepDiveElite_ReturnValue, bool CallFunc_IsValid_ReturnValue, bool CallFunc_SelectVisibility_IsVisible, bool CallFunc_SelectVisibility_VisibilityChanged, ESlateVisibility CallFunc_SelectVisibility_New_Visibility);
    void SetEliteActive(bool EliteActive, bool Temp_bool_Variable, ESlateVisibility Temp_byte_Variable, ESlateVisibility Temp_byte_Variable_1, ESlateVisibility K2Node_Select_Default);
    void SetHeaderContents(FText Header Contents, FText CallFunc_TextToUpper_ReturnValue);
    void PreConstruct(bool IsDesignTime);
    void ExecuteUbergraph_ITM_DeepDiveHeader(int32 EntryPoint, bool K2Node_Event_IsDesignTime);
}

#endif
