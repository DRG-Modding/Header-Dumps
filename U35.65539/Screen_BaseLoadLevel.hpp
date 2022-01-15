#ifndef UE4SS_SDK_Screen_BaseLoadLevel_HPP
#define UE4SS_SDK_Screen_BaseLoadLevel_HPP

class UScreen_BaseLoadLevel_C : UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;

    void StartLoadSeq();
    void StopLoader();
    void ExecuteUbergraph_Screen_BaseLoadLevel(int32 EntryPoint, UPlayerController* CallFunc_GetOwningPlayer_ReturnValue, UFSDPlayerController* K2Node_DynamicCast_AsFSDPlayer_Controller, bool K2Node_DynamicCast_bSuccess, OnPlayerCharacterPossesed__DelegateSignature K2Node_CreateDelegate_OutputDelegate, bool Temp_bool_Has_Been_Initd_Variable, UFSDGameInstance* CallFunc_GetFSDGameInstance_ReturnValue, UFSDGameState* CallFunc_GetFSDGameState_ReturnValue, UFSDGameInstance* CallFunc_GetFSDGameInstance_ReturnValue_1, bool Temp_bool_IsClosed_Variable);
}

#endif
