#ifndef UE4SS_SDK_Screen_BaseLoadLevel_HPP
#define UE4SS_SDK_Screen_BaseLoadLevel_HPP

class UScreen_BaseLoadLevel_C : public UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;

    void StartLoadSeq();
    void StopLoader();
    void ExecuteUbergraph_Screen_BaseLoadLevel(int32 EntryPoint, class APlayerController* CallFunc_GetOwningPlayer_ReturnValue, class AFSDPlayerController* K2Node_DynamicCast_AsFSDPlayer_Controller, bool K2Node_DynamicCast_bSuccess, FExecuteUbergraph_Screen_BaseLoadLevelK2Node_CreateDelegate_OutputDelegate K2Node_CreateDelegate_OutputDelegate, bool Temp_bool_Has_Been_Initd_Variable, class UFSDGameInstance* CallFunc_GetFSDGameInstance_ReturnValue, class AFSDGameState* CallFunc_GetFSDGameState_ReturnValue, class UFSDGameInstance* CallFunc_GetFSDGameInstance_ReturnValue_1, bool Temp_bool_IsClosed_Variable);
};

#endif
