#ifndef UE4SS_SDK_BP_CompleteMissionScreen_DorettaHead_HPP
#define UE4SS_SDK_BP_CompleteMissionScreen_DorettaHead_HPP

class ABP_CompleteMissionScreen_DorettaHead_C : public AActor
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UNiagaraComponent* NiagaraNoBlinking;
    class UNiagaraComponent* Niagara;
    class UStaticMeshComponent* SM_Doretta_Broken;
    class USceneComponent* DefaultSceneRoot;

    void ReceiveBeginPlay();
    void StartPlay(ECharselectionCameraLocation selectionLocation);
    void ExecuteUbergraph_BP_CompleteMissionScreen_DorettaHead(int32 EntryPoint, bool CallFunc_IsValid_ReturnValue, class AFSDGameState* CallFunc_GetFSDGameState_ReturnValue, class UObjective* CallFunc_GetPrimaryObjective_ReturnValue, ECharselectionCameraLocation K2Node_CustomEvent_selectionLocation, class UEscortObjective* K2Node_DynamicCast_AsEscort_Objective, bool K2Node_DynamicCast_bSuccess, bool CallFunc_EqualEqual_ByteByte_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue, class UFSDGameInstance* CallFunc_GetFSDGameInstance_ReturnValue, bool Temp_bool_Variable, class UFSDGameUserSettings* CallFunc_GetFSDGameUserSettings_ReturnValue, bool CallFunc_GetPhotosensitiveMode_ReturnValue, class UActorComponent* K2Node_Select_Default, FExecuteUbergraph_BP_CompleteMissionScreen_DorettaHeadK2Node_CreateDelegate_OutputDelegate K2Node_CreateDelegate_OutputDelegate);
};

#endif
