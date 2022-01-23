#ifndef UE4SS_SDK_BP_DataCell_HPP
#define UE4SS_SDK_BP_DataCell_HPP

class ABP_DataCell_C : public ABP_Gem_C
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UOutlineComponent* outline;
    class UNiagaraComponent* Niagara;
    class UPointLightComponent* PointLightshadow;
    class UAudioComponent* Idle_Cue;
    class UPointLightComponent* PointLight;

    void Receive_OnDeposited(class APlayerCharacter* fromPlayer);
    void ExecuteUbergraph_BP_DataCell(int32 EntryPoint, class APlayerCharacter* K2Node_Event_fromPlayer, class USeasonsSubsystem* CallFunc_GetGameInstanceSubsystem_ReturnValue);
};

#endif
