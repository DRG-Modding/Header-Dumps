#ifndef UE4SS_SDK_BP_DeathStats_HPP
#define UE4SS_SDK_BP_DeathStats_HPP

class ABP_DeathStats_C : public AActor
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UStaticMeshComponent* Cube;
    class UWidgetComponent* Widget;
    class USceneComponent* DefaultSceneRoot;

    void Set Stats Owner(class AFSDPlayerState* Player State);
    void ExecuteUbergraph_BP_DeathStats(int32 EntryPoint, class AFSDPlayerState* K2Node_CustomEvent_Player_State, class UUserWidget* CallFunc_GetUserWidgetObject_ReturnValue, class UConsoleScreen_DeathStats_C* K2Node_DynamicCast_AsConsole_Screen_Death_Stats, bool K2Node_DynamicCast_bSuccess);
};

#endif
