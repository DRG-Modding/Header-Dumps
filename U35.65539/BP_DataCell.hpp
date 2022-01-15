#ifndef UE4SS_SDK_BP_DataCell_HPP
#define UE4SS_SDK_BP_DataCell_HPP

class ABP_DataCell_C : UBP_Gem_C
{
    FPointerToUberGraphFrame UberGraphFrame;
    UOutlineComponent* outline;
    UNiagaraComponent* Niagara;
    UPointLightComponent* PointLightshadow;
    UAudioComponent* Idle_Cue;
    UPointLightComponent* PointLight;

    void Receive_OnDeposited(UPlayerCharacter* fromPlayer);
    void ExecuteUbergraph_BP_DataCell(int32 EntryPoint, UPlayerCharacter* K2Node_Event_fromPlayer, USeasonsSubsystem* CallFunc_GetGameInstanceSubsystem_ReturnValue);
}

#endif
