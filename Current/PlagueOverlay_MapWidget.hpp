#ifndef UE4SS_SDK_PlagueOverlay_MapWidget_HPP
#define UE4SS_SDK_PlagueOverlay_MapWidget_HPP

class UPlagueOverlay_MapWidget_C : public UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UImage* Plague_Veins;

    void PreConstruct(bool IsDesignTime);
    void ExecuteUbergraph_PlagueOverlay_MapWidget(int32 EntryPoint);
};

#endif
