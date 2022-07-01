#ifndef UE4SS_SDK_BP_DiscordEoMConsole_HPP
#define UE4SS_SDK_BP_DiscordEoMConsole_HPP

class ABP_DiscordEoMConsole_C : public AActor
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UStaticMeshComponent* Cube1;
    class UWidgetComponent* PSA;
    class UBoxComponent* Box;
    class UWidgetComponent* Widget;
    class USceneComponent* DefaultSceneRoot;
    float LastUpdate;
    class UConsole_DiscordEoMScreen_C* DiscordConsole;
    bool HEOM;

    void ReceiveBeginPlay();
    void ReceiveTick(float DeltaSeconds);
    void RecieveEoMData(bool HasEoM);
    void ExecuteUbergraph_BP_DiscordEoMConsole(int32 EntryPoint);
};

#endif
