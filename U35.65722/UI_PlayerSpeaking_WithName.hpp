#ifndef UE4SS_SDK_UI_PlayerSpeaking_WithName_HPP
#define UE4SS_SDK_UI_PlayerSpeaking_WithName_HPP

class UUI_PlayerSpeaking_WithName_C : public UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UHorizontalBox* LineBox;
    class UBasic_Label_C* NameLabel;
    class UBasic_Image_C* SpeakingIcon;
    class AFSDPlayerState* PlayerState;
    bool IsTalking;

    void SetLineVisible(bool InVisible, bool CallFunc_SelectVisibility_IsVisible, bool CallFunc_SelectVisibility_VisibilityChanged, ESlateVisibility CallFunc_SelectVisibility_New_Visibility);
    void SetPlayerState(class AFSDPlayerState* InPlayerState, bool CallFunc_IsValid_ReturnValue, bool CallFunc_IsValid_ReturnValue_1, FSetPlayerStateK2Node_CreateDelegate_OutputDelegate K2Node_CreateDelegate_OutputDelegate, FSetPlayerStateK2Node_CreateDelegate_OutputDelegate_1 K2Node_CreateDelegate_OutputDelegate_1, bool CallFunc_NotEqual_ObjectObject_ReturnValue, FString CallFunc_GetPlayerName_ReturnValue, FSetPlayerStateK2Node_CreateDelegate_OutputDelegate_2 K2Node_CreateDelegate_OutputDelegate_2, bool CallFunc_SetIsTalking_OutTalking, FSetPlayerStateK2Node_CreateDelegate_OutputDelegate_3 K2Node_CreateDelegate_OutputDelegate_3);
    void SetIsTalking(bool IsTalking, bool& OutTalking, bool Temp_bool_Variable, TEnumAsByte<ENUM_MenuColors::Type> Temp_byte_Variable, TEnumAsByte<ENUM_MenuColors::Type> Temp_byte_Variable_1, bool Temp_bool_Variable_1, TEnumAsByte<ENUM_MenuColors::Type> Temp_byte_Variable_2, TEnumAsByte<ENUM_MenuColors::Type> Temp_byte_Variable_3, TEnumAsByte<ENUM_MenuColors::Type> K2Node_Select_Default, TEnumAsByte<ENUM_MenuColors::Type> K2Node_Select_Default_1);
    void SetPlayerName(FString NewName);
    void Construct();
    void OnTalkingChanged(bool IsTalking);
    void ExecuteUbergraph_UI_PlayerSpeaking_WithName(int32 EntryPoint, bool CallFunc_SetIsTalking_OutTalking, FString K2Node_CustomEvent_NewName, FText CallFunc_Conv_StringToText_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue, bool K2Node_CustomEvent_IsTalking, bool CallFunc_SetIsTalking_OutTalking_1);
};

#endif
