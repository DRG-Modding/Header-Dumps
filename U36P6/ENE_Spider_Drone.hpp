#ifndef UE4SS_SDK_ENE_Spider_Drone_HPP
#define UE4SS_SDK_ENE_Spider_Drone_HPP

class AENE_Spider_Drone_C : public AENE_SpiderBase_Large_C
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UGroundToAirComponent* GroundToAir;
    class UStaticMeshComponent* LeftWing;
    class UStaticMeshComponent* RightWing;
    class USceneComponent* WingCenter;

    void BndEvt__GroundToAir_K2Node_ComponentBoundEvent_0_ChangedStateSig__DelegateSignature();
    void OnMessageAI(FName TriggerName);
    void ExecuteUbergraph_ENE_Spider_Drone(int32 EntryPoint);
};

#endif
