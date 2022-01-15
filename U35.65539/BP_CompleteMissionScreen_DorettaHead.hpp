#ifndef UE4SS_SDK_BP_CompleteMissionScreen_DorettaHead_HPP
#define UE4SS_SDK_BP_CompleteMissionScreen_DorettaHead_HPP

class ABP_CompleteMissionScreen_DorettaHead_C : AActor
{
    FPointerToUberGraphFrame UberGraphFrame;
    UNiagaraComponent* NiagaraNoBlinking;
    UNiagaraComponent* Niagara;
    UStaticMeshComponent* SM_Doretta_Broken;
    USceneComponent* DefaultSceneRoot;

    void ReceiveBeginPlay();
    void StartPlay(ECharselectionCameraLocation selectionLocation);
    void ExecuteUbergraph_BP_CompleteMissionScreen_DorettaHead(int32 EntryPoint, bool CallFunc_IsValid_ReturnValue, UFSDGameState* CallFunc_GetFSDGameState_ReturnValue, UObjective* CallFunc_GetPrimaryObjective_ReturnValue, ECharselectionCameraLocation K2Node_CustomEvent_selectionLocation, UEscortObjective* K2Node_DynamicCast_AsEscort_Objective, bool K2Node_DynamicCast_bSuccess, bool CallFunc_EqualEqual_ByteByte_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue, UFSDGameInstance* CallFunc_GetFSDGameInstance_ReturnValue, bool Temp_bool_Variable, UFSDGameUserSettings* CallFunc_GetFSDGameUserSettings_ReturnValue, bool CallFunc_GetPhotosensitiveMode_ReturnValue, UActorComponent* K2Node_Select_Default, ShowCharacterWorldSignature__DelegateSignature K2Node_CreateDelegate_OutputDelegate);
}

#endif
