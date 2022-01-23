#ifndef UE4SS_SDK_BP_DeepDiveConsole_CharSelect_HPP
#define UE4SS_SDK_BP_DeepDiveConsole_CharSelect_HPP

class ABP_DeepDiveConsole_CharSelect_C : public AActor
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UStaticMeshComponent* StaticMesh6;
    class UStaticMeshComponent* StaticMesh5;
    class UStaticMeshComponent* StaticMesh4;
    class UStaticMeshComponent* StaticMesh3;
    class UStaticMeshComponent* StaticMesh2;
    class UStaticMeshComponent* StaticMesh;
    class UTextRenderComponent* TextRender;
    class UStaticMeshComponent* StaticMesh1;
    class UBoxComponent* Box;
    class USceneComponent* DefaultSceneRoot;

    void ReceiveBeginPlay();
    void ExecuteUbergraph_BP_DeepDiveConsole_CharSelect(int32 EntryPoint);
};

#endif
