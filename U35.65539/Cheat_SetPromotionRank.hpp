#ifndef UE4SS_SDK_Cheat_SetPromotionRank_HPP
#define UE4SS_SDK_Cheat_SetPromotionRank_HPP

class UCheat_SetPromotionRank_C : UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;
    UButton* Button_0;
    UEditableTextBox* CountTextBox;

    void OnFailure_B68487534BCFBEC9FC0EF1A6F9C790B6();
    void OnSuccess_B68487534BCFBEC9FC0EF1A6F9C790B6();
    void Construct();
    void BndEvt__Button_0_K2Node_ComponentBoundEvent_23_OnButtonClickedEvent__DelegateSignature();
    void ExecuteUbergraph_Cheat_SetPromotionRank(int32 EntryPoint, UPlayerController* CallFunc_GetOwningPlayer_ReturnValue, UDestroySessionCallbackProxy* CallFunc_DestroySession_ReturnValue, EmptyOnlineDelegate__DelegateSignature K2Node_CreateDelegate_OutputDelegate, bool CallFunc_IsValid_ReturnValue, UFSDCheatManager* CallFunc_GetCheatManager_ReturnValue, bool CallFunc_IsValid_ReturnValue_1, FText CallFunc_GetText_ReturnValue, FString CallFunc_Conv_TextToString_ReturnValue, int32 CallFunc_Conv_StringToInt_ReturnValue, EmptyOnlineDelegate__DelegateSignature K2Node_CreateDelegate_OutputDelegate_1);
}

#endif
