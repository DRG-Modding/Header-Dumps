#ifndef UE4SS_SDK_BP_DeathStats_HPP
#define UE4SS_SDK_BP_DeathStats_HPP

class ABP_DeathStats_C : public AActor
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UStaticMeshComponent* Cube;
    class UWidgetComponent* Widget;
    class USceneComponent* DefaultSceneRoot;

    void Set Stats Owner(class AFSDPlayerState* Player State);
    void ExecuteUbergraph_BP_DeathStats(int32 EntryPoint);
};

#endif
