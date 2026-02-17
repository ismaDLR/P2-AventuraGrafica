#include "MoveSide.h"



UMoveSide::UMoveSide()
{
	PrimaryComponentTick.bCanEverTick = true;
}

void UMoveSide::TickComponent(float DeltaTime, ELevelTick Tick, FActorComponentTickFunction* func)
{
	Super::TickComponent(DeltaTime, Tick, func);
	//int ran = random();
	//GEngine->AddOnScreenDebugMessage(-1, 5.f, FColor::Red, FString::Printf(TEXT("%i"),ran));

	FVector location = GetOwner()->GetActorLocation() + FVector(speed, 0.0f, 0.0f) * DeltaTime;
	GetOwner()->SetActorLocation(location);
}
float UMoveSide::random() 
{

	return FMath::RandRange(-1.0f, 2.0f);
}