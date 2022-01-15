#ifndef UE4SS_SDK_BP_ForgeConsole_HPP
#define UE4SS_SDK_BP_ForgeConsole_HPP

class ABP_ForgeConsole_C : ABP_BaseSpaceRigConsole_C
{
    FPointerToUberGraphFrame UberGraphFrame;
    UBoxComponent* CollisionBox5;
    UStaticMeshComponent* LightCone;
    UParticleSystemComponent* ParticleSystem_Smoke2;
    UPointLightComponent* PointLight Forge;
    USpotLightComponent* SpotLight Lamp;
    UBoxComponent* CollisionBox4;
    UBoxComponent* CollisionBox3;
    UBoxComponent* CollisionBox2;
    USkeletalMeshComponent* SkeletalMesh Forge;
    UBoxComponent* CollisionBox1;
    UPointLightComponent* PointLight Lamp;
    UParticleSystemComponent* ParticleSystem_Smoke;

    void OnWindowCreated(UWindowWidget* WindowWidget);
    void UpdateNotificationBanner();
    void ExecuteUbergraph_BP_ForgeConsole(int32 EntryPoint, UWindowWidget* K2Node_Event_WindowWidget, ItemUINotificationDelegate__DelegateSignature K2Node_CreateDelegate_OutputDelegate, UMENU_Forge_C* K2Node_DynamicCast_AsMENU_Forge, bool K2Node_DynamicCast_bSuccess, UGameData* CallFunc_GetFSDGameData_ReturnValue, UFSDSaveGame* CallFunc_GetFSDSaveGame_ReturnValue, bool CallFunc_IsInItemUINotificationSet_ReturnValue, UUserWidget* CallFunc_GetUserWidgetObject_ReturnValue, UConsoleScreen_Base_C* K2Node_DynamicCast_AsConsole_Screen_Base, bool K2Node_DynamicCast_bSuccess_1);
}

#endif
