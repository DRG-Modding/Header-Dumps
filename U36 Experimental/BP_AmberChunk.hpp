#ifndef UE4SS_SDK_BP_AmberChunk_HPP
#define UE4SS_SDK_BP_AmberChunk_HPP

class ABP_AmberChunk_C : public ABP_Gem_C
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UPointLightComponent* PointLight;
    FTimerHandle TimerHandle;
    float LifeTime;
    bool destroyed;
    class UMaterialInstanceDynamic* Dynamic Material;
    FLinearColor Initial Colour;
    FLinearColor Final Colour;
    float ProgressFrequency;
    float TimeElapsed;
    FLinearColor Initial Color Tint1;
    FLinearColor Final Color Tint1;

    void OnRep_Destroyed();
    void UserConstructionScript();
    void ReceiveBeginPlay();
    void DestroySelf();
    void Time();
    void ExecuteUbergraph_BP_AmberChunk(int32 EntryPoint);
};

#endif
