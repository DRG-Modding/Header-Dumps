#ifndef UE4SS_SDK_Cheat_SetPromotionRank_HPP
#define UE4SS_SDK_Cheat_SetPromotionRank_HPP

class UCheat_SetPromotionRank_C : public UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UButton* Button_0;
    class UEditableTextBox* CountTextBox;

    void OnFailure_B68487534BCFBEC9FC0EF1A6F9C790B6();
    void OnSuccess_B68487534BCFBEC9FC0EF1A6F9C790B6();
    void Construct();
    void BndEvt__Button_0_K2Node_ComponentBoundEvent_23_OnButtonClickedEvent__DelegateSignature();
    void ExecuteUbergraph_Cheat_SetPromotionRank(int32 EntryPoint, class APlayerController* CallFunc_GetOwningPlayer_ReturnValue, class UDestroySessionCallbackProxy* CallFunc_DestroySession_ReturnValue, FExecuteUbergraph_Cheat_SetPromotionRankK2Node_CreateDelegate_OutputDelegate K2Node_CreateDelegate_OutputDelegate, bool CallFunc_IsValid_ReturnValue, class UFSDCheatManager* CallFunc_GetCheatManager_ReturnValue, bool CallFunc_IsValid_ReturnValue_1, FText CallFunc_GetText_ReturnValue, FString CallFunc_Conv_TextToString_ReturnValue, int32 CallFunc_Conv_StringToInt_ReturnValue, FExecuteUbergraph_Cheat_SetPromotionRankK2Node_CreateDelegate_OutputDelegate_1 K2Node_CreateDelegate_OutputDelegate_1);
};

#endif
