#ifndef UE4SS_SDK_BP_Compressed_Gold_HPP
#define UE4SS_SDK_BP_Compressed_Gold_HPP

class ABP_Compressed_Gold_C : public ABP_Gem_C
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UPointLightComponent* PointLight6;
    class UPointLightComponent* PointLight5;
    class UPointLightComponent* PointLight4;
    class UPointLightComponent* PointLight3;
    class UPointLightComponent* PointLight2;
    class UPointLightComponent* PointLight1;
    class UPointLightComponent* PointLight;

    void All_PlayDugFree();
    void Receive_OnDeposited(class APlayerCharacter* fromPlayer, class AActor* toActor);
    void ExecuteUbergraph_BP_Compressed_Gold(int32 EntryPoint);
};

#endif
