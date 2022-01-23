#ifndef UE4SS_SDK_ITM_DeepDiveHeader_HPP
#define UE4SS_SDK_ITM_DeepDiveHeader_HPP

class UITM_DeepDiveHeader_C : public UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UImage* Image_188;
    class UImage* Image_304;
    class UITM_DeepDiveHeaderElite_C* ITM_DeepDiveHeaderElite;
    class UShadowBG_C* ShadowBG;
    class USizeBox* SizeBox_0;
    class UTextBlock* TXT_DeepDive_BG;
    class UTextBlock* TXT_DeepDive_Front;
    FText Header Contents;
    bool EliteActive;

    void FromActiveDeepDive(class UDeepDiveManager* CallFunc_GetDeepDiveManager_ReturnValue, class UDeepDive* CallFunc_GetActiveDeepDive_ReturnValue);
    void FromDeepDive(class UDeepDive* InDeepDive, bool CallFunc_IsDeepDiveElite_ReturnValue, bool CallFunc_IsValid_ReturnValue, bool CallFunc_SelectVisibility_IsVisible, bool CallFunc_SelectVisibility_VisibilityChanged, ESlateVisibility CallFunc_SelectVisibility_New_Visibility);
    void SetEliteActive(bool EliteActive, bool Temp_bool_Variable, ESlateVisibility Temp_byte_Variable, ESlateVisibility Temp_byte_Variable_1, ESlateVisibility K2Node_Select_Default);
    void SetHeaderContents(FText Header Contents, FText CallFunc_TextToUpper_ReturnValue);
    void PreConstruct(bool IsDesignTime);
    void ExecuteUbergraph_ITM_DeepDiveHeader(int32 EntryPoint, bool K2Node_Event_IsDesignTime);
};

#endif
