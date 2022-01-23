#ifndef UE4SS_SDK_UI_NameTags_HPP
#define UE4SS_SDK_UI_NameTags_HPP

class UUI_NameTags_C : public UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UImage* Image_Icon;
    class USizeBox* SizeBox_Image;
    float Height;

    void SetData(class AFSDPlayerState* Player);
    void PreConstruct(bool IsDesignTime);
    void OnPlayerNameChanged_Event_0(FString NewName);
    void ExecuteUbergraph_UI_NameTags(int32 EntryPoint, FString K2Node_CustomEvent_NewName, bool K2Node_Event_IsDesignTime, class AFSDPlayerState* K2Node_CustomEvent_player, bool CallFunc_HasNormalOwnerStatus_ReturnValue, bool CallFunc_GetGameOwnerStatus_ReturnValue, bool CallFunc_GetGameOwnerStatus_ReturnValue_1, bool CallFunc_IsValid_ReturnValue, FExecuteUbergraph_UI_NameTagsK2Node_CreateDelegate_OutputDelegate K2Node_CreateDelegate_OutputDelegate, ESlateVisibility Temp_byte_Variable, ESlateVisibility Temp_byte_Variable_1, bool Temp_bool_Variable, ESlateVisibility K2Node_Select_Default);
};

#endif
