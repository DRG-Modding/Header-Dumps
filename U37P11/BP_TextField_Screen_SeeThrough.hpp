#ifndef UE4SS_SDK_BP_TextField_Screen_SeeThrough_HPP
#define UE4SS_SDK_BP_TextField_Screen_SeeThrough_HPP

class ABP_TextField_Screen_SeeThrough_C : public AActor
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UTextRenderComponent* TextRender;
    class UWidgetComponent* Widget;
    class USceneComponent* DefaultSceneRoot;
    bool ShowBG;

    void ReceiveBeginPlay();
    void ExecuteUbergraph_BP_TextField_Screen_SeeThrough(int32 EntryPoint);
};

#endif
