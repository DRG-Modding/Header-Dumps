#ifndef UE4SS_SDK_BP_SpaceRig_Cabin01_HPP
#define UE4SS_SDK_BP_SpaceRig_Cabin01_HPP

class ABP_SpaceRig_Cabin01_C : AActor
{
    FPointerToUberGraphFrame UberGraphFrame;
    UPointLightComponent* PointLight5;
    UStaticMeshComponent* StaticMeshComponent016;
    UPointLightComponent* PointLight4;
    UPointLightComponent* PointLight3;
    UPointLightComponent* PointLight2;
    UStaticMeshComponent* SM_FireExtinguisher_0014;
    UStaticMeshComponent* SM_FireExtinguisher_0013;
    UStaticMeshComponent* SM_FireExtinguisher_0012;
    UStaticMeshComponent* SM_PosItNote_001;
    UStaticMeshComponent* SM_FireExtinguisher_0011;
    UStaticMeshComponent* SM_FireExtinguisher_0010;
    UStaticMeshComponent* SM_FireExtinguisher_009;
    UStaticMeshComponent* SM_FireExtinguisher_008;
    UStaticMeshComponent* SM_FireExtinguisher_007;
    UStaticMeshComponent* SM_FireExtinguisher_006;
    UStaticMeshComponent* SM_FireExtinguisher_005;
    UStaticMeshComponent* SM_FireExtinguisher_004;
    UStaticMeshComponent* SM_FireExtinguisher_003;
    UStaticMeshComponent* SM_FireExtinguisher_002;
    UStaticMeshComponent* SM_FireExtinguisher_001;
    UChildActorComponent* Monitor_MotivationalQuotes1;
    UStaticMeshComponent* StaticMesh;
    UStaticMeshComponent* StaticMeshComponent018;
    UPointLightComponent* PointLight1;
    UPointLightComponent* PointLight;
    UWidgetComponent* Widget;
    UStaticMeshComponent* StaticMeshComponent017;
    UStaticMeshComponent* StaticMeshComponent015;
    UStaticMeshComponent* StaticMeshComponent014;
    UStaticMeshComponent* StaticMeshComponent013;
    UChildActorComponent* Monitor_MotivationalQuotes;
    UStaticMeshComponent* StaticMeshComponent012;
    UStaticMeshComponent* StaticMeshComponent011;
    UStaticMeshComponent* StaticMeshComponent010;
    UStaticMeshComponent* StaticMeshComponent09;
    UStaticMeshComponent* StaticMesh3;
    UStaticMeshComponent* StaticMeshComponent08;
    UStaticMeshComponent* StaticMeshComponent07;
    UStaticMeshComponent* StaticMeshComponent05;
    UStaticMeshComponent* StaticMesh2;
    UChildActorComponent* BP_MissionStats;
    USceneComponent* Scene1;
    UAudioComponent* SimpleConstant_steam_cue;
    UParticleSystemComponent* P_SpaceRig_GrateSteam01;
    UStaticMeshComponent* StaticMesh1;
    UStaticMeshComponent* SM_Vent_A_2m;
    UStaticMeshComponent* SM_Vent_A;
    UStaticMeshComponent* StaticMeshComponent06;
    UStaticMeshComponent* StaticMeshComponent04;
    UStaticMeshComponent* cabin;
    USceneComponent* Scene;

    void ReceiveBeginPlay();
    void Steam();
    void ExecuteUbergraph_BP_SpaceRig_Cabin01(int32 EntryPoint, float CallFunc_RandomFloatInRange_ReturnValue, float CallFunc_RandomFloatInRange_ReturnValue_1, float CallFunc_RandomFloatInRange_ReturnValue_2);
}

#endif
