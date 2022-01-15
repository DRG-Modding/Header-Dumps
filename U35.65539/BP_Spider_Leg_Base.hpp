#ifndef UE4SS_SDK_BP_Spider_Leg_Base_HPP
#define UE4SS_SDK_BP_Spider_Leg_Base_HPP

class ABP_Spider_Leg_Base_C : AActor
{
    FPointerToUberGraphFrame UberGraphFrame;
    USimpleObjectInfoComponent* SimpleObjectInfo;
    UStaticMeshComponent* Mesh;
    UBoxComponent* Box;
    USceneComponent* DefaultSceneRoot;

    void ReceiveBeginPlay();
    void ExecuteUbergraph_BP_Spider_Leg_Base(int32 EntryPoint);
}

#endif
