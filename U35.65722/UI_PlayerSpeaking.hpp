#ifndef UE4SS_SDK_UI_PlayerSpeaking_HPP
#define UE4SS_SDK_UI_PlayerSpeaking_HPP

class UUI_PlayerSpeaking_C : public UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UBasic_Image_C* Basic_Image;
    float Size;
    class AFSDPlayerState* PlayerState;
    FUI_PlayerSpeaking_COnChanged OnChanged;
    void OnChanged(bool InTalking);

    void PreConstruct(bool IsDesignTime);
    void OnTalkingChanged(bool IsTalking);
    void SetPlayerState(class AFSDPlayerState* NewPlayerState);
    void ExecuteUbergraph_UI_PlayerSpeaking(int32 EntryPoint, bool Temp_bool_Variable, ESlateVisibility Temp_byte_Variable, ESlateVisibility Temp_byte_Variable_1, bool CallFunc_IsValid_ReturnValue, bool CallFunc_IsValid_ReturnValue_1, bool K2Node_Event_IsDesignTime, bool K2Node_CustomEvent_IsTalking, FVector2D CallFunc_MakeVector2D_ReturnValue, ESlateVisibility K2Node_Select_Default, class AFSDPlayerState* K2Node_CustomEvent_NewPlayerState, FExecuteUbergraph_UI_PlayerSpeakingK2Node_CreateDelegate_OutputDelegate K2Node_CreateDelegate_OutputDelegate, FExecuteUbergraph_UI_PlayerSpeakingK2Node_CreateDelegate_OutputDelegate_1 K2Node_CreateDelegate_OutputDelegate_1);
    void OnChanged__DelegateSignature(bool InTalking);
};

#endif
