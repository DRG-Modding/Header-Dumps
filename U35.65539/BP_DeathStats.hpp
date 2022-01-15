#ifndef UE4SS_SDK_BP_DeathStats_HPP
#define UE4SS_SDK_BP_DeathStats_HPP

class ABP_DeathStats_C : AActor
{
    FPointerToUberGraphFrame UberGraphFrame;
    UStaticMeshComponent* Cube;
    UWidgetComponent* Widget;
    USceneComponent* DefaultSceneRoot;

    void Set Stats Owner(UFSDPlayerState* Player State);
    void ExecuteUbergraph_BP_DeathStats(int32 EntryPoint, UFSDPlayerState* K2Node_CustomEvent_Player_State, UUserWidget* CallFunc_GetUserWidgetObject_ReturnValue, UConsoleScreen_DeathStats_C* K2Node_DynamicCast_AsConsole_Screen_Death_Stats, bool K2Node_DynamicCast_bSuccess);
}

#endif
