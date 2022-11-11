#ifndef UE4SS_SDK_BP_Spider_Leg_Base_HPP
#define UE4SS_SDK_BP_Spider_Leg_Base_HPP

class ABP_Spider_Leg_Base_C : public AActor
{
    FPointerToUberGraphFrame UberGraphFrame;
    class USimpleObjectInfoComponent* SimpleObjectInfo;
    class UStaticMeshComponent* Mesh;
    class UBoxComponent* Box;
    class USceneComponent* DefaultSceneRoot;

    void ReceiveBeginPlay();
    void ExecuteUbergraph_BP_Spider_Leg_Base(int32 EntryPoint);
};

#endif
