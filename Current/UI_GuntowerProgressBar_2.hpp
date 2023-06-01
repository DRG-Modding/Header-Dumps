#ifndef UE4SS_SDK_UI_GuntowerProgressBar_2_HPP
#define UE4SS_SDK_UI_GuntowerProgressBar_2_HPP

class UUI_GuntowerProgressBar_2_C : public UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UWidgetAnimation* Activated;
    class UWidgetAnimation* Startup;
    class UTextBlock* AnalysingText;
    class UImage* BaseElementBG;
    class UCanvasPanel* CanvasPanel_0;
    class UTextBlock* FinishedText;
    class UImage* Image_2;
    class UImage* Image_3;
    class UVerticalBox* ModulesDisplayRight;
    class UTextBlock* TextBlock_1;
    class UUI_Guntower_ProgressBar_ModuleIcon_C* UI_Guntower_ProgressBar_ModuleIcon_C_0;
    class UUI_Guntower_ProgressBar_ModuleIcon_C* UI_Guntower_ProgressBar_ModuleIcon_C_1;
    class UUI_Guntower_ProgressBar_ModuleIcon_C* UI_Guntower_ProgressBar_ModuleIcon_C_2;
    class AGuntowerActivationPlatform* ActivationPlatform;
    FTimerHandle VisibleTimer;
    class UMaterialInstanceDynamic* NewVar_0;
    int32 OldPlayerCount;

    bool FirstPlayerSteppedOn(int32 CurrentPlayers);
    bool LastPlayerSteppedOff(int32 CurrentPlayers);
    void GetAssignedModule(class UUI_Guntower_ProgressBar_ModuleIcon_C*& AsUI Guntower Progress Bar Module Icon);
    void Construct();
    void SetStarterPlatform(class AGuntowerActivationPlatform* Starterplatform);
    void OnProgress(float Progress);
    void PlayerCountChanged(int32 playerCount);
    void OnFinished();
    void ExecuteUbergraph_UI_GuntowerProgressBar_2(int32 EntryPoint);
};

#endif
