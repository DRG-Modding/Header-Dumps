#ifndef UE4SS_SDK_BP_Donkey_Escort_HPP
#define UE4SS_SDK_BP_Donkey_Escort_HPP

class ABP_Donkey_Escort_C : public ABP_Donkey_C
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UParticleSystemComponent* P_OmoranHeartStoneMagic_01;
    class UStaticMeshComponent* SM_OmoranStrap_01;
    class UStaticMeshComponent* HearthStone;

    void ReceiveBeginPlay();
    void OnResourceIncreased(class UCappedResource* Resource, float Amount);
    void ExecuteUbergraph_BP_Donkey_Escort(int32 EntryPoint, FExecuteUbergraph_BP_Donkey_EscortK2Node_CreateDelegate_OutputDelegate K2Node_CreateDelegate_OutputDelegate, bool Temp_bool_Variable, class UDialogDataAsset* Temp_object_Variable, class UDialogDataAsset* Temp_object_Variable_1, bool CallFunc_HasAuthority_ReturnValue, class AFSDGameState* CallFunc_GetFSDGameState_ReturnValue, class UCappedResource* K2Node_CustomEvent_resource, float K2Node_CustomEvent_Amount, bool CallFunc_EqualEqual_ObjectObject_ReturnValue, class UAudioComponent* CallFunc_SpawnSoundAttached_ReturnValue, FVector CallFunc_ComponentToWorldLocation_ReturnValue, class UFSDGameInstance* CallFunc_GetFSDGameInstance_ReturnValue, class UParticleSystemComponent* CallFunc_SpawnEmitterAtLocation_ReturnValue, class UGeneratedMission* CallFunc_GetGeneratedMission_ReturnValue, bool CallFunc_IsDeepDive_ReturnValue, class UDialogDataAsset* K2Node_Select_Default);
};

#endif
